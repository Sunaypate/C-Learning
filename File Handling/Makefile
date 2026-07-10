.PHONY: F

F: Files.exe

Files.exe: Files.c
	gcc Files.c -o "Files.exe"

Run-F: Files.exe
	./Files.exe

clean:
	del newFile.txt
	del Files.exe