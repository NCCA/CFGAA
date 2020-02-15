#ifndef COLOUR_H_
#define COLOUR_H_


class Colour
{
  public :

    Colour()=default;
    ~Colour()=default;
    Colour(float _r, float _g,float _b, float _a=1.0f) :
      m_r{_r},m_g{_g},m_b{_b},m_a{_a} {}
    Colour(const Colour &_c)=default;
    // accessors
    float red() const ;
    float green() const ;
    float blue() const ;
    float alpha() const ;
    // mutators see here for param passing guidelines
    // https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#fcall-parameter-passing
    void set(float _r, float _g, float _b, float _a=1.0f);
    void setRed(float _r);
    void setGreen(float _g);
    void setBlue(float _b);
    void setAlpha(float _a);

    void clamp(float _min,float _max);
    void mix(const Colour &_in, float _t);
    static Colour mix(const Colour &_a, const Colour &_b, float _t);
  private:

    float m_r=0.0f;
    float m_g=0.0f;
    float m_b=0.0f;
    float m_a=1.0f;
};

#endif
