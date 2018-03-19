//ErrorState.h
//Julian (Hoh-il) Synn
//OOP244 - Milestone 2
//Date: Mar 17, 2018
#include <iostream>

namespace AMA {

	class ErrorState {

		//private functions (by default)
		char* errorText;

		//public functions
		public:
			explicit ErrorState(const char* errorMessage = nullptr);

			ErrorState(const ErrorState& em) = delete;
		
			ErrorState& operator=(const ErrorState& em) = delete;
		
			virtual ~ErrorState();
		
			void clear();

			bool isClear() const;

			void message(const char* str);

			const char* message()const;



	};

	//operator<<, helper functions
	std::ostream& operator<<(std::ostream& os1, const ErrorState& Error1);



}