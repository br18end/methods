function n = bubbleSort(A)
  n = length(A);
  for i = 1:n
    for j = 2:n
      if(A(j-1)>A(j))
        aux = A(j-1);
        A(j-1)=A(j);
        A(j)=aux;
      end
    end
  end
n = A;