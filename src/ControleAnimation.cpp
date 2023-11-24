#include "ControleAnimation.h"

SpriteGame ControleAnimation::GetSprite(){
	Update();
	return sprites[frame];
}
void ControleAnimation::AddSprite(SpriteGame sprite){
	sprites[quantSprites] = sprite;
	quantSprites++;
}
void ControleAnimation::SetTimeUpdate(int time){
	timeUpdate = time;
}
void ControleAnimation::Update(){
	temp++;
	if(temp%timeUpdate == 0){
		frame++;
		temp=0;
		if(frame==quantSprites){
			frame = 0;
		}
	}
}
int ControleAnimation::GetLength(){
	return quantSprites;
}

