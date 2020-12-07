with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;
with Ada.Command_Line; use Ada.Command_Line;
procedure Upg2 is
    Length : Integer;
    Base : Integer;
    Input : String(1..99);
    function Result(Input : in String; Length : in Integer) return Integer is
	B, A : Integer := 0;
	X : Integer := Length-1;
    begin
	for I in 1..Length loop
	    B := Integer'Value(Input(I..I))*(Base**X);
	    A := A+B;
	    X := X-1;
	end loop;
	return A;
    end Result;
begin
    if Argument_Count > 0 then
	Base := Integer'Value(Argument(1));
    else
	Base := 2;
    end if;
    Put("Enter a number in base ");
    Put(Base, Width=>0);
    Put(": ");
    
    Get_Line(Input,Length);
    Put("In base ");
    Put(Base, Width=>0);
    Put(" it equals: ");
    Put(Result(Input,Length), Width=> 0);
end Upg2;

