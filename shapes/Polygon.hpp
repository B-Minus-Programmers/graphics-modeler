#pragma once
#include "Shape.hpp"

namespace jbrush
{
class Polygon final : public Shape
{
public:
    /* Constructors */
    Polygon(const QPoint* const points, uint32_t pointCount);

    /* Destructor */
    ~Polygon() override;

    /* Getters */
    QPoint   getPoint(uint32_t) const;
    uint32_t getPointCount()    const;

    /* Setters */
    void setPoint(uint32_t index, const QPoint& point);
    void setPoints(const QPoint* const points, uint32_t pointCount);

    /* Render */
    virtual void draw(QPainter&) const override;

    /* Polyline Information */
    virtual double area() const override;
    virtual double perimeter() const override;
    virtual std::string toString() const override;

private:
    QPoint*  points;
    uint32_t pointCount;
};
}