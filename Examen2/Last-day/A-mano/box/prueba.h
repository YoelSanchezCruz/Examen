
Box(int ancho = 0, int largo = 0) : ancho_{ancho}, largo_{largo} {}
int GetAncho() const { return ancho_; }
double Area();
Box operator-(const Box& otro) const;
friend std::ostream& operator<<(std::ostream& output, const Box& box);
friend std::istream& operator>>(std::istream& input, Box& box);
