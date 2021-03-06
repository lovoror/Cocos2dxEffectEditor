//
//  MainScene.hpp
//  EffectEditor
//
//  Created by Matrix on 16/6/30.
//
//

#ifndef MainScene_hpp
#define MainScene_hpp

#include <stdio.h>
#include "EffectEditor.hpp"
#include "NodeSingleton.hpp"

using namespace cocos2d;

NS_EE_BEGIN

class Project;

class MainScene : public Scene, public NodeSingleton<MainScene>
{
public:
    virtual bool init() override;
    Project* getCurrentProject(void);
    
    CREATE_FUNC(MainScene);
private:
    
    Project *mProject;
};

NS_EE_END

#endif /* MainScene_hpp */
