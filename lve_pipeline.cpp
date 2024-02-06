#include "lve_pipeline.hpp"

//std
#include <fstream>
#include <stdexcept>
#include <iostream>
namespace lve
{    
    std::vector<char> LvePipeline::readFile(const std::string& filepath){

        std::ifstream file{filepath,std::ios::ate | std::ios::binary};


        if(!file.is_open()){
            throw std::runtime_error("Fail to open file:"+ filepath);

        }
        size_t fileSize =  static_cast<size_t>(file.tellg());
        std::vector<char> buffer(fileSize);

        file.seekg(0);
        file.read(buffer.data(),fileSize);

        file.close();
        return buffer;
    }
    void LvePipeline::createGraphicsPipeLine(
        const std::string& vertFilePath, const std::string& fragFilePath){

            auto vertCode =  readFile(vertFilePath);
            auto fragCode =  readFile(fragFilePath);
    }
}
        
    
    
