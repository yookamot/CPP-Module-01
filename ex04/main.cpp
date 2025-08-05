/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yookamot <yookamot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:59:06 by yookamot          #+#    #+#             */
/*   Updated: 2025/08/05 16:56:11 by yookamot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

static std::string replaceText(const std::string& text, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t start = 0;
    size_t pos = 0;
    size_t len = s1.length();

    while ((pos = text.find(s1, start)) != std::string::npos) {
        result += text.substr(start, pos - start);
        result += s2;
        start = pos + len;
    }
    result += text.substr(start);
    return result;
}

int main(int argc, char **argv){
    if (argc != 4) {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return 1;
    }
    std::ifstream inFile(argv[1]);
    if (!inFile) {
        std::cerr << "Error: could'nt open input file." << std::endl;
        return 1;
    }
    std::string text;
    std::string line;
    while (std::getline(inFile, line)) {
        text += line + "\n";
    }
    std::string reText = replaceText(text, (std::string)argv[2], (std::string)argv[3]);
    std::string filename = std::string(argv[1]) + ".replace";
    std::ofstream outFile(filename.c_str());
    outFile << reText << std::flush;
    return 0;
}
