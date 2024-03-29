#ifndef FIGURE_H
#define FIGURE_H


#include <string>
#include <vector>



class Figure {
public:
    Figure(const int width, const int height);
    ~Figure();
    bool setPoint(const int col, const int line);
    bool clearPoint(const int col, const int line);
    void SetLine(const int line);
    void SetColumn(const int col);
    void save(std::string filename);
    void draw();
    void clearBuffer();
    
    
public:
       
    const int width;
    const int height;
    std::vector<char> forme; 
};
#endif
