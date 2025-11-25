bool fileExists(const char* filename){
    std::ifstream IN(filename);
    return IN.is_open();
}
