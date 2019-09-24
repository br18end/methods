function n = mergeSort(A)
  n = length(A);
  if(n<2)
    n = A;
  else
    m = round(n/2);
    L = A(1:m);
    R = A(m+1:n);
    L = mergeSort(L);
    R = mergeSort(R);
    n = merge(L,R);
  end
function n = merge(L,R)
  n1 = length(L);
  n2 = length(R);
  i = j = 0;
  B = [];
  while(i<n1||j<n2)
    if (i<n1 && j<n2)
      if(L(i+1)<=R(j+1))
        B(i+j+1) = L(i+1);
        i = i+1;
      else
        B(i+j+1) = R(j+1);
        j = j+1;
      end
    elseif(i<n1)
      B(i+j+1) = L(i+1);
      i = i+1;
    elseif(j<n2)
      B(i+j+1) = R(j+1);
      j = j+1;
    end
  end
n = B;