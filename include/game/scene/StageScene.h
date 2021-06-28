#pragma once

#include "al/scene/Scene.h"

class StageScene : public al::Scene
    {
    public:
        StageScene();

        virtual ~StageScene();
        virtual void init(const al::SceneInitInfo &);
        virtual void appear();
        virtual void kill();
        
        virtual void control();
        virtual void drawMain();
    };