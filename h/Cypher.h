#ifndef CYPHER_H
#define CYPHER_H 1
#include "./libs.h"

namespace cypher{
	
	class Cypher{

		public:
			
			Cypher(std::istream& in,std::ostream& out):
				m_in(in),
				m_out(out)
				// ,m_err("ALL_CLEAR")
			{}

			virtual ~Cypher() = default;

			/**
				0 means ok and 1 means problem, if 1 is received 
				getError() will help you
			*/
			virtual int cipher()=0;
			virtual int decipher()=0;

			/* std::string_view getError(){ return std::string_view(m_err); }; */

		protected:
			std::istream& m_in;
			std::ostream& m_out;
			// std::string m_err;
	};

};

#endif
