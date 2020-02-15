#include "Colour.h"
#include <gtest/gtest.h>
using namespace ::testing;

TEST(Colour,defaultCtor)
{
  Colour c;
  EXPECT_FLOAT_EQ(c.red(),0.0f);
  EXPECT_FLOAT_EQ(c.green(),0.0f);
  EXPECT_FLOAT_EQ(c.blue(),0.0f);
  EXPECT_FLOAT_EQ(c.alpha(),1.0f);
}

TEST(Colour,userCtorNoAlpha)
{
  Colour c(0.2f,0.3f,0.5f);
  EXPECT_FLOAT_EQ(c.red(),0.2f);
  EXPECT_FLOAT_EQ(c.green(),0.3f);
  EXPECT_FLOAT_EQ(c.blue(),0.5f);
  EXPECT_FLOAT_EQ(c.alpha(),1.0f);
}

TEST(Colour,userCtorAlpha)
{
  Colour c(0.2f,0.3f,0.5f,0.2f);
  EXPECT_FLOAT_EQ(c.red(),0.2f);
  EXPECT_FLOAT_EQ(c.green(),0.3f);
  EXPECT_FLOAT_EQ(c.blue(),0.5f);
  EXPECT_FLOAT_EQ(c.alpha(),0.2f);
}

TEST(Colour,set)
{
  Colour c;
  c.set(0.2f,0.3f,0.5f,0.2f);
  EXPECT_FLOAT_EQ(c.red(),0.2f);
  EXPECT_FLOAT_EQ(c.green(),0.3f);
  EXPECT_FLOAT_EQ(c.blue(),0.5f);
  EXPECT_FLOAT_EQ(c.alpha(),0.2f);
}


TEST(Colour,copyCtor)
{
  Colour c(0.2f,0.3f,0.5f,0.2f);
  auto cp=c;
  EXPECT_FLOAT_EQ(cp.red(),0.2f);
  EXPECT_FLOAT_EQ(cp.green(),0.3f);
  EXPECT_FLOAT_EQ(cp.blue(),0.5f);
  EXPECT_FLOAT_EQ(cp.alpha(),0.2f);
}

TEST(Colour,accessMutate)
{
  Colour c;
  c.setRed(0.1f);
  c.setGreen(0.22f);
  c.setBlue(0.8f);
  c.setAlpha(0.002f);

  EXPECT_FLOAT_EQ(c.red(),0.1f);
  EXPECT_FLOAT_EQ(c.green(),0.22f);
  EXPECT_FLOAT_EQ(c.blue(),0.8f);
  EXPECT_FLOAT_EQ(c.alpha(),0.002f);
}

TEST(Colour,clamp)
{
  Colour c(0.1f,0.9f,0.25f,0.75f);
  c.clamp(0.25f,0.75f);
  EXPECT_FLOAT_EQ(c.red(),0.25f);
  EXPECT_FLOAT_EQ(c.green(),0.75f);
  EXPECT_FLOAT_EQ(c.blue(),0.25f);
  EXPECT_FLOAT_EQ(c.alpha(),0.75f);
  c.set(0.2f,0.3f,0.4f,0.5f);
  c.clamp(0.2f,0.9f);
  EXPECT_FLOAT_EQ(c.red(),0.2f);
  EXPECT_FLOAT_EQ(c.green(),0.3f);
  EXPECT_FLOAT_EQ(c.blue(),0.4f);
  EXPECT_FLOAT_EQ(c.alpha(),0.5f);
}


TEST(Colour,mix)
{
  Colour a(0.0f,0.0f,0.0f,0.0f);
  Colour b(1.0f,1.0f,1.0f,1.0f);
  a.mix(b,0.0);
  EXPECT_FLOAT_EQ(a.red(),0.0f);
  EXPECT_FLOAT_EQ(a.green(),0.0f);
  EXPECT_FLOAT_EQ(a.blue(),0.0f);
  EXPECT_FLOAT_EQ(a.alpha(),0.0f);
  a.mix(b,1.0);
  EXPECT_FLOAT_EQ(a.red(),1.0f);
  EXPECT_FLOAT_EQ(a.green(),1.0f);
  EXPECT_FLOAT_EQ(a.blue(),1.0f);
  EXPECT_FLOAT_EQ(a.alpha(),1.0f);
  { // reset a and b
    Colour a(0.0f,0.0f,0.0f,0.0f);
    Colour b(1.0f,1.0f,1.0f,1.0f);
    a.mix(b,0.5);
    EXPECT_FLOAT_EQ(a.red(),0.5f);
    EXPECT_FLOAT_EQ(a.green(),0.5f);
    EXPECT_FLOAT_EQ(a.blue(),0.5f);
    EXPECT_FLOAT_EQ(a.alpha(),0.5f);
  }
}


TEST(Colour,mixStatic)
{
  Colour a(0.0f,0.0f,0.0f,0.0f);
  Colour b(1.0f,1.0f,1.0f,1.0f);
  Colour res;
  for(float t=0.0f; t<=1.0f; t+=0.1f)
  {
    res=Colour::mix(a,b,t);
    EXPECT_FLOAT_EQ(res.red(),t);
    EXPECT_FLOAT_EQ(res.green(),t);
    EXPECT_FLOAT_EQ(res.blue(),t);
    EXPECT_FLOAT_EQ(res.alpha(),t);

  }


}


