#include "googletest/googletest/include/gtest/gtest.h"
#include "src/character.cpp"

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
    
    character.chAtkStats(5); 
    character.chDefStats(-3); 
    character.heal(10); 
    character.damage(15); 

    EXPECT_EQ(character.getAtk(), 35);
    EXPECT_EQ(character.getDef(), 22);
    EXPECT_EQ(character.getHP(), 115);
}

// Test chAtkStats function again
TEST(CharacterTest, ChangeStatsAgain) {
    Character character("Sam", 80, 15, 10);
    
    character.chAtkStats(-3); 

    EXPECT_EQ(character.getAtk(), 12);
    EXPECT_EQ(character.getDef(), 10); // Ensure other stats remain unchanged
    EXPECT_EQ(character.getHP(), 80); // Ensure other stats remain unchanged
}

// Test chDefStats function again
TEST(CharacterTest, ChangeDefStatsAgain) {
    Character character("Jane", 150, 35, 28);
    
    character.chDefStats(8); // Increase defense by 8

    EXPECT_EQ(character.getAtk(), 35); // Ensure other stats remain unchanged
    EXPECT_EQ(character.getDef(), 36);
    EXPECT_EQ(character.getHP(), 150); // Ensure other stats remain unchanged
}

// Test heal function again
TEST(CharacterTest, HealAgain) {
    Character character("Rob", 90, 20, 18);
    
    character.heal(20); // Increase HP by 20

    EXPECT_EQ(character.getAtk(), 20); // Ensure other stats remain unchanged
    EXPECT_EQ(character.getDef(), 18); // Ensure other stats remain unchanged
    EXPECT_EQ(character.getHP(), 110);
}

// Test damage function again
TEST(CharacterTest, DamageAgain) {
    Character character("Liz", 200, 40, 30);
    
    character.damage(50); // Decrease HP by 50

    EXPECT_EQ(character.getAtk(), 40); // Ensure other stats remain unchanged
    EXPECT_EQ(character.getDef(), 30); // Ensure other stats remain unchanged
    EXPECT_EQ(character.getHP(), 150);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
