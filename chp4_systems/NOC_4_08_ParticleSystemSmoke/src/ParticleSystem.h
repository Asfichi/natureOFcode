//
//  ParticleSystem.h
//  NOC_4_03_ParticleSystemClass
//
//  Created by Matthias Esterl on 7/4/13.
//
//

#ifndef __NOC_4_03_ParticleSystemClass__ParticleSystem__
#define __NOC_4_03_ParticleSystemClass__ParticleSystem__

#include "ofMain.h"
#include "Particle.h"

class ParticleSystem{

    public:
        ParticleSystem(ofPoint, ofImage);
        void update();
        void display();
        void applyForce(ofPoint);
        void addParticle();
        
        ofPoint origin;
        ofImage img;
        std::vector<Particle*> particles;
};

#endif /* defined(__NOC_4_03_ParticleSystemClass__ParticleSystem__) */
