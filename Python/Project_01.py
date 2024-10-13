import json

def load_data():
  try:
    with open('Youtube.txt') as file:
      return json.load(file)
  except FileNotFoundError:
    return []

def save_data_helper(videos):
  with open('Youtube.txt','w') as file:
    json.dump(videos,file)

def list_all_video(videos):
   print("\n")
   print("*" * 80)
   for index,video in enumerate(videos,start=1):
      print(f"{index}.{video['Name']} , Decoration: {video['Time']}")
   print("\n")
   print("*" * 80)

def add_video(videos):
  name=input("Enter the name")
  time=input("Enter the time")
  videos.append({"Name":name,"Time":time})
  save_data_helper(videos)

def update_video(videos):
  list_all_video(videos)
  index=int(input("Enter the video number to update : "))

  if 1<=index<=len(videos):
    name=input("Enter the new video name ;")
    time=input("Enter the new time :")
    videos[index-1]={'Name':name,'Time':time}
    save_data_helper(videos)

  else:
    print("Invalid video number")

def delete_video(videos):
  list_all_video(videos)
  index=int(input("Enter the video number to delete :"))
  if 1<=index<=len(videos):
    del videos[index-1]
    save_data_helper(videos)
  else:
    print("Invalid video number")


def main():
  videos=load_data()
  while True:
    print("\n Youtube manager | Choose an option")
    print("\n1. List all youtube videos")
    print("2. Add a youtube video  ")
    print("3. Update a youtube video details")
    print("4. Delete a youtube video")
    print("5. Exit the app")
    choice=input(print("Enter the choice : "))
    print(videos)
    match choice:
      case '1':
        list_all_video(videos)
      case '2':
        add_video(videos)
      case '3':
        update_video(videos)
      case '4':
        delete_video(videos)
      case '5':
        break
      case _:
        print("Invalid choice")
if __name__=="__main__":
  main()
