#pragma once

#ifdef GAMEFRAMEWORK_EXPORTS  
#define GAMEFRAMEWORK_API __declspec(dllexport)   
#else  
#define GAMEFRAMEWORK_API __declspec(dllimport)   
#endif  

namespace GameFramework
{
	template<class AGENT>
	class GAMEFRAMEWORK_API FSM
	{
	public:

		FSM( AGENT& agent );
		~FSM();

		void Update();

	private:

		AGENT& m_agent;
		std::uniqState

	};



	template<class AGENT>
	FSM<AGENT>::FSM( AGENT& agent )
		: m_agent( agent )
	{
	}

	template<class AGENT>
	FSM<AGENT>::~FSM()
	{
	}

	template<class AGENT>
	void FSM<AGENT>::Update()
	{

	}
}