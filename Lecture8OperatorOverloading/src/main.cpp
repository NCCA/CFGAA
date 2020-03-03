#include <gtest/gtest.h>
#include "Vec3.h"
#include <strstream>
using namespace ::testing;

TEST(Vec3,defaultCtor)
{
  Vec3 v;
  EXPECT_FLOAT_EQ(v.m_x,0.0f);
  EXPECT_FLOAT_EQ(v.m_y,0.0f);
  EXPECT_FLOAT_EQ(v.m_z,0.0f);

}

TEST(Vec3,userCtor)
{
  Vec3 v(1.0f,2.0f,3.0f);
  EXPECT_FLOAT_EQ(v.m_x,1.0f);
  EXPECT_FLOAT_EQ(v.m_y,2.0f);
  EXPECT_FLOAT_EQ(v.m_z,3.0f);

}

TEST(Vec3,copyCtor)
{
  Vec3 v(1.0f,2.0f,3.0f);
  auto b=v;
  EXPECT_TRUE(b==v);

}

TEST(Vec3,floatCtor)
{
  Vec3 v(2.0);
  EXPECT_TRUE(v==Vec3(2.0f,2.0f,2.0f));
}


TEST(Vec3,add)
{
  Vec3 a(1.0f,2.0f,3.0f);
  Vec3 b(4.0f,5.0f,6.0f);
  auto c=a+b;
  EXPECT_FLOAT_EQ(c.m_x,5.0f);
  EXPECT_FLOAT_EQ(c.m_y,7.0f);
  EXPECT_FLOAT_EQ(c.m_z,9.0f);
}


TEST(Vec3,subtract)
{
  Vec3 a(1.0f,2.0f,3.0f);
  Vec3 b(4.0f,5.0f,6.0f);
  auto c=a-b;
  EXPECT_FLOAT_EQ(c.m_x,-3.0f);
  EXPECT_FLOAT_EQ(c.m_y,-3.0f);
  EXPECT_FLOAT_EQ(c.m_z,-3.0f);
}




TEST(Vec3,addEqual)
{
  Vec3 a(1.0f,2.0f,3.0f);
  Vec3 b(4.0f,5.0f,6.0f);
  a+=b;
  EXPECT_FLOAT_EQ(a.m_x,5.0f);
  EXPECT_FLOAT_EQ(a.m_y,7.0f);
  EXPECT_FLOAT_EQ(a.m_z,9.0f);
}

TEST(Vec3,subtractEqual)
{
  Vec3 a(1.0f,2.0f,3.0f);
  Vec3 b(4.0f,5.0f,6.0f);
  a-=b;
  EXPECT_FLOAT_EQ(a.m_x,-3.0f);
  EXPECT_FLOAT_EQ(a.m_y,-3.0f);
  EXPECT_FLOAT_EQ(a.m_z,-3.0f);
}

TEST(Vec3,multiplyFloat)
{
  Vec3 a(1.0f,2.0f,3.0f);
  auto c=a*2.0f;
  EXPECT_FLOAT_EQ(c.m_x,2.0f);
  EXPECT_FLOAT_EQ(c.m_y,4.0f);
  EXPECT_FLOAT_EQ(c.m_z,6.0f);
}

TEST(Vec3,floatMultiply)
{
  Vec3 a(1.0f,2.0f,3.0f);
  auto c=2.0f*a;
  EXPECT_FLOAT_EQ(c.m_x,2.0f);
  EXPECT_FLOAT_EQ(c.m_y,4.0f);
  EXPECT_FLOAT_EQ(c.m_z,6.0f);
}


TEST(Vec3,multiplyFloatEqual)
{
  Vec3 a(1.0f,2.0f,3.0f);
  a*=2.0f;
  EXPECT_FLOAT_EQ(a.m_x,2.0f);
  EXPECT_FLOAT_EQ(a.m_y,4.0f);
  EXPECT_FLOAT_EQ(a.m_z,6.0f);
}

TEST(Vec3,divideFloatEqual)
{
  Vec3 a(1.0f,2.0f,3.0f);
  a/=2.0f;
  EXPECT_FLOAT_EQ(a.m_x,0.5f);
  EXPECT_FLOAT_EQ(a.m_y,1.0f);
  EXPECT_FLOAT_EQ(a.m_z,1.5f);

}

TEST(Vec3,divideFloat)
{
  Vec3 a(1.0f,2.0f,3.0f);
  auto b=a/2.0f;
  EXPECT_FLOAT_EQ(b.m_x,0.5f);
  EXPECT_FLOAT_EQ(b.m_y,1.0f);
  EXPECT_FLOAT_EQ(b.m_z,1.5f);

}

TEST(Vec3,negate)
{
  Vec3 v(1,2,3);
  -v;
  EXPECT_FLOAT_EQ(v.m_x,-1.0f);
  EXPECT_FLOAT_EQ(v.m_x,-2.0f);
  EXPECT_FLOAT_EQ(v.m_x,-3.0f);

}

TEST(Vec3,subscript)
{
  Vec3 v;
  v[0]=2.0f;
  v[1]=3.0f;
  v[2]=4.0f;

  EXPECT_FLOAT_EQ(v[0],2.0f);
  EXPECT_FLOAT_EQ(v[1],3.0f);
  EXPECT_FLOAT_EQ(v[2],4.0f);


}

TEST(Vec3,divideVec)
{
  Vec3 a(1.0f,2.0f,3.0f);
  Vec3 b(2.0f);
  auto c=a/b;
  EXPECT_FLOAT_EQ(c.m_x,0.5f);
  EXPECT_FLOAT_EQ(c.m_y,1.0f);
  EXPECT_FLOAT_EQ(c.m_z,1.5f);
}

TEST(Vec3,divideEqualVec)
{
  Vec3 a(1.0f,2.0f,3.0f);
  Vec3 b(2.0f,2.0f,2.0f);
  a/=b;
  EXPECT_FLOAT_EQ(a.m_x,0.5f);
  EXPECT_FLOAT_EQ(a.m_y,1.0f);
  EXPECT_FLOAT_EQ(a.m_z,1.5f);
}

TEST(Vec3,insertionOperator)
{
  std::stringstream out;
  Vec3 b;
  out<<b;
  EXPECT_EQ(out.str(),"[0,0,0]");
}

TEST(Vec3,extractionOperator)
{
  std::stringstream in("1 2 3");
  Vec3 b;
  in>>b;
  EXPECT_TRUE(b==Vec3(1,2,3));
}

