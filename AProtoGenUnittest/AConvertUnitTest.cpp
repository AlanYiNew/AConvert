// AConvert.cpp: ����Ӧ�ó������ڵ㡣
//

#include <iostream>
#include "AResource_unit_test.h"
#include "AProtocol_unit_test.h"

int main(int argc, char* argv[]) {
    if (!run_AResource_encode_unit_test()) {
        std::cout << "Failed run_AResource_encode_unit_test" << std::endl; 
        return 0;
    }

    if (!run_AResource_decode_unit_test()) {
        std::cout << "Failed run_AResource_decode_unit_test" << std::endl; 
        return 0;
    }

    if (!run_AProtocol_encode_unit_test()) {
        std::cout << "Failed run_AResource_protocol_unit_test" << std::endl; 
        return 0;
    }

    if (!run_AProtocol_decode_unit_test()) {
        std::cout << "Failed run_AResource_protocol_unit_test" << std::endl; 
        return 0;
    }
    return 0;

}
