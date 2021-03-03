namespace Utils {
    /**
    * FUNCTION: replaceAll
    * USE: Replaces all occurrences of the 'oldValue' string with the 
    *   'newValue' string
    * @param source: The source string
    * @param oldValue: The string to be replaced
    * @param newValue: The string to replace all occurrences of oldValue
    * @return: A new string with all occurrences replaced
    */
    std::string replaceAll(const std::string& source
        , const std::string& oldValue, const std::string& newValue) {
        if (oldValue.empty()) {
            return source;
        }
        std::string newString;
        newString.reserve(source.length());
        std::size_t lastPos = 0;
        std::size_t findPos;
        while (std::string::npos != (findPos = source.find(oldValue, lastPos))) {
            newString.append(source, lastPos, findPos - lastPos);
            newString += newValue;
            lastPos = findPos + oldValue.length();
        }
        newString += source.substr(lastPos);
        return newString;
    }
}// http://programmingnotes.org/
