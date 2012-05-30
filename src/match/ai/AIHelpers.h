#ifndef AIHELPERS_H
#define AIHELPERS_H

#include <memory>
#include <functional>

#include "match/Player.h"
#include "match/PlayerActions.h"
#include "match/Distance.h"

class AIHelpers {
	public:
		static std::shared_ptr<PlayerAction> createMoveActionTo(const Player& p,
				const AbsVector3& pos, float threshold = 0.3f);
		static std::shared_ptr<PlayerAction> createMoveActionToBall(const Player& p);
		static AbsVector3 getShotPosition(const Player& p);
		static AbsVector3 getPassPosition(const Player& p);
		static AbsVector3 getPassKickVector(const Player& from, const AbsVector3& to);
		static AbsVector3 getPassKickVector(const Player& from, const Player& to);
		static AbsVector3 getPassKickVector(const Player& from, const AbsVector3& pos, const AbsVector3& vel);
		static float checkTacticArea(const Player& p, float score, const AbsVector3& pos);
		static float linearScale(float dist, float opt);

	private:
		static AbsVector3 getPositionByFunc(const Player& p, std::function<float (const AbsVector3& v)> func);
};

#endif

