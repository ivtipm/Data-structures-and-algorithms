#include <iostream>
#include <format>

#include "httplib.h"
// библиотека только из заголовочного файла для HTTP запросов
// https://github.com/yhirose/cpp-httplib
// Требуется OpenSSL, устанвока в Убунту: sudo apt install libssl-dev
// См. также CmakeLists.txt


using namespace std;


class Cache{

};

/// Извлекает из JSON строки (ответ Ollama) значение поля response
/// @return: значение поля response
string extract_responce(const string& raw_json) {
    int start = raw_json.find("response")+8+3;            // начало текста ответа; длина слова response + ":"
    if (start == string::npos) return "";       // если слово response не найдено
    int end = start+1;

    // поиск завершаюшей двойной кавычки
    while ( (raw_json[end] != '"' or raw_json[end-1] == '\\') and end < raw_json.size() )
        end++;

    return raw_json.substr(start, end-start);
}


int main() {
  // Клиент для запроса к серверу Ollama
    httplib::Client cli("http://localhost:11434");

    // JSON строка для запроса; R - raw (сырая) строка, такую строку можно записать как многострочный литерал
    string json_model = R"(
    {
        "model": "smollm2:135m",
        "stream": false, )";

    string input = string("\"Who is sir Tim Berners-Lee?\" }");
    cout << "Введите запрос:\n";
    cin >> input;

    string query = " \"prompt\":" + input;
    string json = json_model + query;

    cout << json;

    // Отправка POST запроса
    httplib::Result res = cli.Post(
        "/api/generate",
        json,
        "application/json"
    );

    if (!res) {     // у Result перегружен оператор bool, поэтому можно писать !res
        std::cerr << "Ошибка соединения с Ollama\n";
        return 1;
    }

    std::cout << "HTTP status: " << res->status << "\n";
    // std::cout << "Response body:\n" << res->body << "\n\n";
    std::cout << "Response body:\n" << extract_responce(res->body) << "\n";
}