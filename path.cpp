#include "path.h"

using namespace std;

string path(const string& _restTracks) {
    std::filesystem::path current_path = std::filesystem::current_path();
    std::string current_path_str = current_path.string();
    current_path_str+=_restTracks;
    return current_path_str;
}