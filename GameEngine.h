
#ifndef ASSIGN2_ENGINE_H
#define ASSIGN2_ENGINE_H

#include "Player.h"
#include <string>
#include <iostream>
#include <regex>

class GameEngine{
public:
  GameEngine();
  ~GameEngine();

  void playGame(std::string p1, std::string p2);
  void addPlayer(Player* p);
  void initialisePlayerTiles(Player* player, LinkedList* tileBag);
  void shuffleAndCreateTileBag(LinkedList* tileBag);
  int randomNumberGenerate();

  // Ensures string format matches valid formats of "place <tile> at <location>" or "replace <tile>"
  bool validateFormat(std::string input);


  std::string getTileFromUserInput(std::string input);
  std::string getLocationFromUserInput(std::string input);

  bool validateTileExistInHand(std::string tileInput, Player* player);
  bool validateLegalMove(std::string tileInput, std::string gridLocation, std::string inputFromUser, Player* player);

  void printScore();
  void scorePoint(Player* p);
  void scoreQwirkle(Player* p);

  void getState(Player* p);
  // Player* getPlayer(int id);
  // Board& getBoard();

  int countToken(std::string);



private:
  // Grid grid;
  // Board board;
  Player* playerList[2];
  int playerCount;
  // LinkedList* tileBag;
};

#endif //ASSIGN2_ENGINE_H
