#include <bits/stdc++.h>
#include <iostream>
 
using namespace std;
 
void pattern ()
{
 
}
 
int main()
{
  vector <int > arr = {1,2,3};
  vector <int> s = {1,1};

  int count =0;

  for( int i =0;i< arr.size();i++)
  {
    for( int j = 0 ; j<s.size(); j++)
    {
      if(arr[i] >= s[j])

      {
        count++;
        s[j]=-1;
      }
    }
  }
  
   
 
  cout<<count;
 
  return 0;
}

import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Create a HashSet
        HashSet<String> hashSet = new HashSet<>();
        Scanner scanner = new Scanner(System.in);


        while (true) {
            String input = scanner.nextLine();
            if (input.equals("done")) break;
            hashSet.add(input);
        }

        System.out.println("Enter element to remove:");
        String toRemove = scanner.nextLine();
        if (hashSet.remove(toRemove)) {
            System.out.println("Removed: " + toRemove);
        } else {
            System.out.println("Element not found.");
        }

        System.out.println("Enter element to check if present:");
        String toCheck = scanner.nextLine();
        if (hashSet.contains(toCheck)) {
            System.out.println(toCheck + " is in the HashSet.");
        } else {
            System.out.println(toCheck + " is not in the HashSet.");
        }

        // Printing the HashSet values by index
        System.out.println("Enter an index to get the element:");
        int index = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        if (index < 0 || index >= hashSet.size()) {
            System.out.println("Invalid index.");
        } else {
            Iterator<String> iterator = hashSet.iterator();
            for (int i = 0; i <= index; i++) {
                String value = iterator.next();
                if (i == index) {
                    System.out.println("Element at index " + index + ": " + value);
                }
            }
        }

        // Printing the entire HashSet
        System.out.println("The current elements in the HashSet are: " + hashSet);
    }
}
