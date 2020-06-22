#include "SpecialSortTest.h"

TEST_F(SpecalSortTest, EkeElectronics){

	const char *rawText = "eke-elektroniikka";

	const char *expectedResult = "eeeertiioakkkkln";

	char *returnedText = NULL;

	EXPECT_TRUE(returnedText == NULL);

	//call the function
	returnedText = SpecialSort(rawText);

	EXPECT_STREQ(expectedResult, returnedText);

}

TEST_F(SpecalSortTest, NullPassedToFunction) {
	char *returnedText = NULL;
	returnedText = SpecialSort(NULL);
	EXPECT_EQ(nullptr, returnedText);
}

TEST_F(SpecalSortTest, EmptyStringPassedToFunction){
	char *returnedText;
	returnedText = SpecialSort("");
	EXPECT_EQ(nullptr, returnedText);
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
