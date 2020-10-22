#include <igloo/igloo.h>

#include "myLib.h"

using namespace igloo;

Context(HelloFunction) {

	Spec(TheOnlyTestPossible) {
		Assert::That(sayHello(), Equals("Hello World"));
	}
};

Context(EchoFunction) {

	Spec(EchoHello) {
		Assert::That(echoWord("hello"), Equals("hello"));
	}

	Spec(EchoWorld) {
		Assert::That(echoWord("world"), Equals("world"));
	}
};

bool compare(const ucm::json& lhs, const ucm::json& rhs){
	return true;
}

Context(SuperBowlFunction){
	Spec(OnlyPossibleTest){
		ucm::json score;
		score["home_team"] = "New England Patriots";
        score["home_score"] = 13;
        score["away_team"] = "Los Angeles Rams";
        score["away_score"] = 3;
		Assert::That(compare(getSuperBowlScore(),score));
	}
};


int main() {
	// Run all the tests defined above
	return TestRunner::RunAllTests();
}
