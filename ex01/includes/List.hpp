#ifndef LIST_HPP
# define LIST_HPP

# define MAX_FIELD_WIDTH 10
# define COLUMN_NUM 4

# include <string>

class List 
{
  private:
    void _printEntry(std::string str) const;
    void _printBoundary(void) const;
    void _printRowSeparator(void) const;

  public:
    List(void);
    ~List(void);
    void printRow(
      std::string index,
      std::string firstName,
      std::string lastName,
      std::string nickname,
      bool isLastRow = false
      ) const;
    void printHeaderRow(void) const;
};

#endif
