function n = insertionSort(A)
  n = length(A);
  for i = 2:n
    aux = A(i);
    j = i-1;
    while(j>0&&A(j)>aux)
      A(j+1) = A(j);
      j = j-1;
      A(j+1)=aux;
    end
  end
n = A;