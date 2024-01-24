def sort_list(list):


  # Create a copy of the list.
  new_list = list[:]

  for i in range(len(new_list) - 1):
    for j in range(i + 1, len(new_list)):
      # If the current element is greater than the next element, swap them.
      if new_list[i] > new_list[j]:
        new_list[i], new_list[j] = new_list[j], new_list[i]

  return new_list


if __name__ == "__main__":
  # Create a list.
  list = [10, 5, 2, 7, 3]

  # Sort the list.
  new_list = sort_list(list)

  # Print the sorted list.
  print(new_list)
