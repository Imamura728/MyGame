/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "AudioEngine.h"
#include "cocos2d.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    return HelloWorld::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Scene::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
   /* auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));*/

    //if (closeItem == nullptr ||
    //    closeItem->getContentSize().width <= 0 ||
    //    closeItem->getContentSize().height <= 0)
    //{
    //    //problemLoading("'CloseNormal.png' and 'CloseSelected.png'");
    //}
    //else
    //{
    //    float x = origin.x + visibleSize.width - closeItem->getContentSize().width/2;
    //    float y = origin.y + closeItem->getContentSize().height/2;
    //    closeItem->setPosition(Vec2(x,y));
    //}

    // create menu, it's an autorelease object
    //auto menu = Menu::create(closeItem, NULL);
    //menu->setPosition(Vec2::ZERO);
    //this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label

    //auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
    //if (label == nullptr)
    //{
    //    problemLoading("'fonts/Marker Felt.ttf'");
    //}
    //else
    //{
    //    // position the label on the center of the screen
    //    label->setPosition(Vec2(origin.x + visibleSize.width/2,
    //                            origin.y + visibleSize.height - label->getContentSize().height));

    //    // add the label as a child to this layer
    //    this->addChild(label, 1);
    //}
	

// テクスチャファイル名を指定して、スプライトを作成
	Sprite* zero = Sprite::create("0%.png"); 
	// シーングラフにつなぐ 
	this->addChild(zero); 

	zero->setPosition(Vec2(visibleSize.width / 2, visibleSize.height /2));
	zero->setScale(3);

	Sprite* ten1 = Sprite::create("10.png");
	this->addChild(ten1);
	ten1->setPosition(Vec2(595, 268));
	ten1->setScale(2.5);
	ten1->setScaleY(2.7);

	Sprite* ten2 = Sprite::create("10.png");
	this->addChild(ten2);
	ten2->setPosition(Vec2(835, 268));
	ten2->setScale(2.5);
	ten2->setScaleY(2.7);

	Sprite* star1 = Sprite::create("starR.png");
	this->addChild(star1);
	star1->setPosition(Vec2(640, 400));
	star1->setScale(2.5);
	star1->setScaleY(2.7);

	Sprite* star2 = Sprite::create("starG.png");
	this->addChild(star2);
	star2->setPosition(Vec2(880, 400));
	star2->setScale(2.5);
	star2->setScaleY(2.7);

	Sprite* k1001 = Sprite::create("100kirby.png");
	this->addChild(k1001);
	k1001->setPosition(Vec2(640, 150));
	k1001->setScale(2.5);
	k1001->setScaleY(2.7);

	Sprite* k1002 = Sprite::create("100kirby.png");
	this->addChild(k1002);
	k1002->setPosition(Vec2(880, 150));
	k1002->setScale(2.5);
	k1002->setScaleY(2.7);

	Sprite* breath = Sprite::create("breath.png");
	this->addChild(breath);
	breath->setPosition(Vec2(400, 105));
	breath->setScale(4);

	Sprite* hob = Sprite::create("hob.png");
	this->addChild(hob);
	hob->setPosition(Vec2(400, 105));
	hob->setScale(3);

	Sprite* shot = Sprite::create("star.png");
	this->addChild(shot);
	shot->setPosition(Vec2(440, 105));
	shot->setScale(0.08f);

	Sprite* fire = Sprite::create("onfire.png");
	this->addChild(fire);
	fire->setPosition(Vec2(640, 140));
	fire->setScale(3.0f);

	Sprite* fire2 = Sprite::create("onfire.png");
	this->addChild(fire2);
	fire2->setPosition(Vec2(880, 140));
	fire2->setScale(3.0f);

	Sprite* ouch = Sprite::create("ouch.png");
	this->addChild(ouch);
	ouch->setPosition(Vec2(400, 105));
	ouch->setScale(3.0f);

	// テクスチャの読み込み
	Texture2D* texture = Director::getInstance()->getTextureCache()->addImage("dash.png");

	// テクスチャからアニメーションパターンを指定する
	SpriteFrame* frame0 = SpriteFrame::createWithTexture(texture, Rect(75 * 0, 0, 75, 72));
	SpriteFrame* frame1 = SpriteFrame::createWithTexture(texture, Rect(75 * 1, 0, 75, 72));
	SpriteFrame* frame2 = SpriteFrame::createWithTexture(texture, Rect(75 * 2, 0, 75, 72));
	SpriteFrame* frame3 = SpriteFrame::createWithTexture(texture, Rect(75 * 3, 0, 75, 72));
	SpriteFrame* frame4 = SpriteFrame::createWithTexture(texture, Rect(75 * 4, 0, 75, 72));
	SpriteFrame* frame5 = SpriteFrame::createWithTexture(texture, Rect(75 * 5, 0, 75, 72));
	SpriteFrame* frame6 = SpriteFrame::createWithTexture(texture, Rect(75 * 6, 0, 75, 72));
	SpriteFrame* frame7 = SpriteFrame::createWithTexture(texture, Rect(75 * 1, 0, 75, 72));

	// 全てのアニメーションパターンをまとめる
	Vector<SpriteFrame*> animFrames(8);
	animFrames.pushBack(frame0);
	animFrames.pushBack(frame1);
	animFrames.pushBack(frame2);
	animFrames.pushBack(frame3);
	animFrames.pushBack(frame4);
	animFrames.pushBack(frame5);
	animFrames.pushBack(frame6);
	animFrames.pushBack(frame7);

	// アニメーションパターンからSpriteを生成
	Sprite* dash = Sprite::createWithSpriteFrame(frame0);
	dash->setPosition(Vec2(0, 100));
	dash->setScale(3.0f);	// 拡大
	this->addChild(dash);

	//フェーズ1
	// 一コマ分の時間を指定してアニメーションデータを生成
	Animation* animation = Animation::createWithSpriteFrames(animFrames, 0.08f);
	// アニメーションデータからアニメーションアクションを生成
	Animate* animate = Animate::create(animation);
	// 指定回数繰り返すアクションを生成
	Repeat* repeat = Repeat::create(animate, 4);
	MoveTo* move1 = MoveTo::create(2.5f, Vec2(400, 100));

	Hide* hide = Hide::create();
	Show* show = Show::create();
	Hide* hide2 = Hide::create();
	Hide* hide3 = Hide::create();
	Hide* hide4 = Hide::create();
	Hide* hide5 = Hide::create();
	Hide* hide6 = Hide::create();
	Spawn* dash1 = Spawn::create(repeat, move1, nullptr);
	Sequence* action1 = Sequence::create(dash1, hide, nullptr);
	DelayTime* delay1 = DelayTime::create(2.5f);
	Sequence* showAct1 = Sequence::create(delay1, show, nullptr);
	//フェーズ2
	DelayTime* delay2 = DelayTime::create(2.0f);
	MoveTo* move2 = MoveTo::create(2.0f, Vec2(400, 100));
	MoveTo* move3 = MoveTo::create(2.0f, Vec2(400, 100));
	MoveTo* move4 = MoveTo::create(2.0f, Vec2(400, 100));
	MoveTo* move5 = MoveTo::create(2.0f, Vec2(400, 100));
	ScaleTo* small1 = ScaleTo::create(2.0f, 0);
	ScaleTo* small2 = ScaleTo::create(2.0f, 0);
	ScaleTo* small3 = ScaleTo::create(2.0f, 0);
	ScaleTo* small4 = ScaleTo::create(2.0f, 0);
	RemoveSelf* remove = RemoveSelf::create();
	Spawn* toMouth1 = Spawn::create(move2, small1, nullptr);
	Spawn* toMouth2 = Spawn::create(move3, small2, nullptr);
	Spawn* toMouth3 = Spawn::create(move4, small3, nullptr);
	Spawn* toMouth4 = Spawn::create(move5, small4, nullptr);
	Sequence* inTo1 = Sequence::create(delay1, toMouth1,hide, nullptr);
	Sequence* inTo2 = Sequence::create(delay1, toMouth2,hide, nullptr);
	Sequence* inTo3 = Sequence::create(delay1, toMouth3,hide, nullptr);
	Sequence* inTo4 = Sequence::create(delay1, toMouth4,hide, nullptr);
	
	//フェーズ3
	Sequence* toHide1 = Sequence::create(delay1,delay2, hide, nullptr);
	Sequence* showAct2 = Sequence::create(delay1, delay2, show, nullptr);

	//フェーズ4
	MoveBy* move7 = MoveBy::create(2.0f, Vec2(0,-500));
	MoveBy* move8 = MoveBy::create(2.0f, Vec2(0, -500));
	DelayTime* delay3 = DelayTime::create(1.0f);
	DelayTime* hitDelay = DelayTime::create(0.5f);
	DelayTime* hitDelay2 = DelayTime::create(0.5f);
	DelayTime* stay = DelayTime::create(0.5f);
	DelayTime*stay2 = DelayTime::create(0.5f);
	Sequence* toHide2 = Sequence::create(delay1, delay2,delay3, hide, nullptr);
	Sequence* showAct3 = Sequence::create(delay1, delay2,delay3, show, nullptr);
	MoveTo* move6 = MoveTo::create(2.5f, Vec2(1400, 100));
	RotateBy* roll = RotateBy::create(2.0f, 360);
	RepeatForever* rolling = RepeatForever::create(roll);
	Place* place = Place::create(Vec2(-50, 100));
	MoveBy* move9 = MoveBy::create(2.0f, Vec2(450, 0));
	Sequence* pow = Sequence::create(delay1, delay2, delay3,show, move6,place,move9,hide, nullptr);
	Sequence* onfire = Sequence::create(delay1, delay2, delay3,hitDelay, show,stay,move7, nullptr);
	Sequence* onfire2 = Sequence::create(delay1, delay2, delay3, hitDelay,hitDelay2, show,stay2,move8, nullptr);
	Sequence* fired = Sequence::create(delay1, delay2, delay3, hitDelay,hide, nullptr);
	Sequence* fired2 = Sequence::create(delay1, delay2, delay3, hitDelay, hitDelay2, hide, nullptr);
	
	//フェーズ5
	DelayTime* phase5 = DelayTime::create(10.0f);
	DelayTime* deadDelay = DelayTime::create(1.0f);
	Sequence* dead = Sequence::create(phase5, hide, nullptr);
	MoveBy* move10 = MoveBy::create(0.5f, Vec2(0, 200));
	MoveBy* move11 = MoveBy::create(0.5f, Vec2(0, -400));
	RotateBy* droll = RotateBy::create(0.5f, 360);
	Spawn* over = Spawn::create(droll, move10, nullptr);
	Spawn* over2 = Spawn::create(droll, move11, nullptr);
	Sequence* damaged = Sequence::create(phase5, show, deadDelay, over, over2, nullptr);

	// アクションの実行
	dash->runAction(action1);
	breath->runAction(hide);
	hob->runAction(hide2);
	shot->runAction(hide3);
	fire->runAction(hide4);
	fire2->runAction(hide5);
	ouch->runAction(hide6);
	breath->runAction(showAct1);
	star1->runAction(inTo1);
	star2->runAction(inTo2);
	ten1->runAction(inTo3);
	ten2->runAction(inTo4);
	breath->runAction(toHide1);
	hob->runAction(showAct2);
	hob->runAction(toHide2);
	breath->runAction(showAct3);
	shot->runAction(rolling);
	shot->runAction(pow);
	fire->runAction(onfire);
	fire2->runAction(onfire2);
	k1001->runAction(fired);
	k1002->runAction(fired2);
	breath->runAction(dead);
	ouch->runAction(damaged);
	this->scheduleUpdate();


    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() as given above,instead trigger a custom event created in RootViewController.mm as below*/

    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);


}

void HelloWorld::update(float delta)
{
	counter++;

	if (counter == 5)
	{
		experimental::AudioEngine::play2d("dashing.mp3");
	}
	else if (counter == 125)
	{
		experimental::AudioEngine::play2d("breathing.mp3");
	}
	else if (counter == 305)
	{
		experimental::AudioEngine::play2d("shoot.mp3");
	}
	else if (counter == 335)
	{
		experimental::AudioEngine::play2d("hit.mp3");
	}
	else if (counter == 365)
	{
		experimental::AudioEngine::play2d("hit.mp3");
	}
	else if (counter == 595)
	{
		experimental::AudioEngine::play2d("damaged.mp3");
	}
	else if (counter == 655)
	{
		experimental::AudioEngine::play2d("miss.mp3",false,0.5f);
	}
}