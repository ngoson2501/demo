#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> tokenize(string str) {
    vector<string> tokens;
    string token = "";
    for (char c : str) {
        if (isspace(c)) {
            if (!token.empty()) {
                tokens.push_back(token);
                token = "";
            }
        } else if (ispunct(c)) {
            if (!token.empty()) {
                tokens.push_back(token);
                token = "";
            }
            tokens.push_back(string(1, c));
        } else {
            token += c;
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }
    return tokens;
}

bool is_keyword(string token) {
    static const vector<string> keywords = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
    return find(keywords.begin(), keywords.end(), token) != keywords.end();
}

bool is_identifier(string token) {
    if (!isalpha(token[0]) && token[0] != '_') {
        return false;
    }
    for (char c : token.substr(1)) {
        if (!isalnum(c) && c != '_') {
            return false;
        }
    }
    return true;
}

bool is_operator(string token) {
    static const vector<string> operators = {"+", "-", "*", "/", "=", "==", "!=", "<", ">", "<=", ">="};
    return find(operators.begin(), operators.end(), token) != operators.end();
}

bool is_constant(string token) {
    if (isdigit(token[0])) {
        return true;
    } else if (token[0] == '\'' && token[token.length() - 1] == '\'') {
        return true;
    } else if (token[0] == '"' && token[token.length() - 1] == '"') {
        return true;
    } else {
        return false;
    }
}

bool is_special_character(string token) {
    static const vector<char> special_characters = {'(', ')', '{', '}', '[', ']', ',', ';', ':', '?'};
    return find(special_characters.begin(), special_characters.end(), token[0]) != special_characters.end();
}

int main() {
    string expression;
    cout << "Nhap bieu thuc: ";
    getline(cin, expression);
    vector<string> tokens = tokenize(expression);
    for (string token : tokens) }
