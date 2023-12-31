#ifndef CONTROLEANIMATION_H
#define CONTROLEANIMATION_H
#include <Engine.h>

class ControleAnimation
{
	public:
        SpriteGame GetSprite();
        void AddSprite(SpriteGame sprite);
        void SetTimeUpdate(int time);
        int  GetLength();
	private:
        int temp = 0;
        int frame = 0;
        int timeUpdate = 10;
        int quantSprites = 0;
        SpriteGame sprites[100];
        void Update();
};

#endif // CONTROLEANIMATION_H
