#ifndef SHAPE_H_
#define SHAPE_H_

class Shape
{
  public :
    Shape()=default;
    Shape(const Shape &)=default;
    ~Shape()=default;
    void setWidth(float _w);
    void setHeight(float _h);

    float width() const;
    float height() const;


  protected:
    float m_width=0.0f;
    float m_height=0.0f;
};

#endif
