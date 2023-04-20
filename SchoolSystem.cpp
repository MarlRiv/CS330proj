# Andrew Johnson & Marland Rivers

class Course:
    def __init__(self, courseID, courseName, courseProf, meetTime, meetDays, secNumber):
        self.courseID = courseID
        self.courseName = courseName
        self.courseProf = courseProf
        self.meetTime = meetTime
        self.meetDay = meetDays
        self.secNumber = secNumber

        def getCourseId(self):
            return self.courseID
        def setCourseId(self, courseID):
            self.courseID = courseID

        def getCourseName(self):
            return self.courseName
        def setCourseName(self, courseName):
            self.courseName = courseName

        def getCourseProf(self):
            return self.courseProf
        def setCourseId(self, courseProf):
            self.courseProf = courseProf

        def getMeetTime(self):
            return self.meetTime
        def setCourseId(self, meetTime):
            self.meetTIme = meetTime

        def getMeetDay(self):
            return self.meetDay
        def setCourseId(self, meetDay):
            self.meetDay = meetDay

        def getSecNum(self):
            return self.secNum
        def setSecNum(self, secNum):
            self.secNum = secNum

        def __str__(self):
            return f'{self.courseID},{self.courseName}, {self.courseProf}, {self.meetTime}, {self.meetDays}, {self.secNumber}'

class User:

    def __init__(self, userID, Name):
        self.userID = userID
        self.Name = Name
        courseFile = "/Users/mrivers/PycharmProjects/FendProject/courseInfo.txt"
        self.infile = open(courseFile, "r+")
        courseData = self.infile.readlines()
        self.courseList = []

        for line in courseData:
            line = line.rstrip()
            splitLine = line.split(",")
            self.courseList.append(Course(splitLine[0], splitLine[1], splitLine[2], splitLine[3], splitLine[4], splitLine[5]))

    def add(self, course):
        for course in self.courseList:
            print(course)
        pass

    def edit(self, courseID, secNum):
        pass

    def delete(self, courseID, secNum):
        pass

    def courseSearch(self, couseID):
        pass

    def profSearch(self, courseProf):
        pass

    def checkSchedule(self, courseProf):
        pass

    def addUser(self, ID):
        pass

    def deleteUser(self, ID):
        pass

    def exit(self):
        pass


def main():
    user = User(11111, "Paul")
    user.add("math")

if __name__ == '__main__':
    main()
