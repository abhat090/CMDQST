#include "src/googletest/googletest/gtest.h"
#include "../headers/character.hpp"

// Test the default constructor
TEST(CharacterTest, DefaultConstructor) {
    Character character;
    EXPECT_EQ(character.getName(), "");
    EXPECT_EQ(character.getHP(), 0);
    EXPECT_EQ(character.getAtk(), 0);
    EXPECT_EQ(character.getDef(), 0);
}

// Test the parameterized constructor
TEST(CharacterTest, ParameterizedConstructor) {
    Character character("Bob", 100, 20, 15);
    EXPECT_EQ(character.getName(), "Bob");
    EXPECT_EQ(character.getHP(), 100);
    EXPECT_EQ(character.getAtk(), 20);
    EXPECT_EQ(character.getDef(), 15);
}

// Test the setters
TEST(CharacterTest, Setters) {
    Character character;
    character.setName("Alice");
    character.setHP(80);
    character.setAtk(25);
    character.setDef(18);

    EXPECT_EQ(character.getName(), "Alice");
    EXPECT_EQ(character.getHP(), 80);
    EXPECT_EQ(character.getAtk(), 25);
    EXPECT_EQ(character.getDef(), 18);
}

// Test changing stats
TEST(CharacterTest, ChangeStats) {
    Character character("John", 120, 30, 25);
    
    character.chAtkStats(5); // Increase attack by 5
    character.chDefStats(-3); // Decrease defense by 3
    character.heal(10); // Increase HP by 10
    character.damage(15); // Decrease HP by 15

    EXPECT_EQ(character.getAtk(), 35);
    EXPECT_EQ(character.getDef(), 22);
    EXPECT_EQ(character.getHP(), 115);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
