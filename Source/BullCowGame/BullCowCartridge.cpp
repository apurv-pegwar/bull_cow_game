// Fill out your copyright notice in the Description page of Project Settings.

#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT(" Welcome to Cow Game"));
    PrintLine("Guess the four letter word.."); // removve magic number later 
    
    PrintLine("IT STARTS WITH 'C' and used in birthday");

    PrintLine(TEXT("press tab to write then press return"));
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

   FString HiddenWord = TEXT("CAKE");//move outside this function  

   if(Input== HiddenWord)
   {
       PrintLine("you win!!");
   }
   else
   {
       PrintLine(" try again");
       PrintLine("Guess the four letter word..");// these hints are temprprary 

    
    PrintLine("IT STARTS WITH 'C' and used in birthday");
   }


}