#ifndef CAESAR_CYPHER_H
#define CAESAR_CYPHER_H 1

#include "./libs.h"
#include "./Cypher.h"

#define CAESAR_BUFFSIZE 1024

namespace cypher{
	
	class CaesarCypher : public Cypher{

		public:

			CaesarCypher(std::ifstream& inF,std::ofstream outF):Cypher(inF,outF){}
			CaesarCypher(std::istream& in=std::cin,std::ostream& out=std::cout):Cypher(in,out){}

			~CaesarCypher(){};
	
			int cipher(){
				int buffsize=CAESAR_BUFFSIZE;
				char buff[CAESAR_BUFFSIZE];
				while(m_in.getline(buff,buffsize)){
					m_cipher(buff);
					m_out<<buff<<std::endl;
				}
				return 0;
			}

			int decipher(){
				char buff[CAESAR_BUFFSIZE];
				while(m_in.getline(buff,CAESAR_BUFFSIZE)){
					m_decipher(buff);
					m_out<<buff<<std::endl;
				}
				return 0;
			}

		private:
			void m_cipher(char *buff){
				while(buff && *buff!='\0'){
					if(isalpha(*buff))
						*buff=(*buff+3); // caesar wank
					++buff;
				}
			}

			void m_decipher(char *buff){
				while(buff && *buff!='\0'){
					if(isalpha(*buff))
						*buff=(*buff-3); // caesar wank
					++buff;
				}
			}

	};

};
#endif
