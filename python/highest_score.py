# Input a list of student scores
student_scores = input().split()
student_scores = [int(score) for score in student_scores]
for n in range(0, len(student_scores)):
  student_scores[n] = int(student_scores[n])

# Write your code below this row 👇
maximum_score=0
for max in student_scores:
  if(max > maximum_score):
    maximum_score=max
    
print(f"The highest score in the class is: {maximum_score}")
    
  