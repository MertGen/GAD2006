// Fill out your copyright notice in the Description page of Project Settings.


#include "UBasePlayerState.h"

void AUBasePlayerState::AddScore(float Amount)
{

}

void AUBasePlayerState::ConsumeLife()
{
	
}

void AUBasePlayerState::HasRemainingLives(bool & ReturnValue)
{
	if (RemainingLives <= 0) 
	{
		ReturnValue = false;
		return;
	}
}
