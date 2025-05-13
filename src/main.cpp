#include "../h/libs.h"
#include "../h/Cypher.h"
#include "../h/CaesarCypher.h"

int main(int argc,char **argv){
	
	// help
	if (argc<2) {
		std::cout<<"usage: cypher (c/d/cipher/decipher) [input_file] [output_file]"<<std::endl;
		std::cout<<"optional input & output paths are defaulted to stdin and stdout"<<std::endl;
		std::cout<<"future versions will contain more complexity tho :)"<<std::endl;
		return 1;
	}

	// parsing args
	std::string operation=argv[1];
	std::ifstream inF{argc>=3?argv[2]:""};	
	std::ofstream outF{argc>=4?argv[3]:""};

	// actual running
	cypher::CaesarCypher cc{
		argc>=3?inF:std::cin,
		argc>=4?outF:std::cout
	};

	if(operation=="d" || operation=="decipher")	cc.decipher();
	else cc.cipher();

	// cleaning
	inF.close();
	outF.close();

	return 0;
}

