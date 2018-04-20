#pragma once

namespace GameFramework
{
	template <class AGENT>
	class FSMState
	{
	public:

		FSMState( AGENT& agent );
		virtual	~FSMState();

		virtual void Enter();
		virtual FSMState* Update();
		virtual void Exit();

	private:

		AGENT& m_Agent;

	};
}