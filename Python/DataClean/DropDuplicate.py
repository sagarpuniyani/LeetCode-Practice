import pandas as pd


# Drop the Duplicate Elements 
def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    customers.drop_duplicates(subset='Email', keep='first')

# Drop the missing values 

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    students.dropna(how='any')


# Write a solution to modify the salary column by multiplying each salary by 2.
def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees['salary'] = 2* employees['salary']
    return employees

# A solution to rename the columns 

def renameColumns(students: pd.DataFrame) -> pd.DataFrame:
    renaming = { 
        "id" : "student_id" ,
        "first" : "first_name",
        "last" : "last_name",
        "age" : "age_in_years "
    }

    return students.rename(column = renaming )