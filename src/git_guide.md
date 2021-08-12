# Git and GitHub guide

## How to Contribute to the Repository
Here is a brief explanation on how to contribute to git and GitHub for the software team.

#### Git vs. Github
Git is a repository version control that is local to your computer only. This means only the user of the local computer has access to these files. It keeps track of any changes that are commited to it so that each iteration of a repo can be accessed. Be sure to update this each time you finish your work session for the day as it will act as a backup storage. Git is important for version control but also because this is where GitHub will be pulling the files from whenever a "push" occurs. **You will need to install git onto your computer, or have an IDE with Git VCS. If you have an IDE with Git, you can skip the installation.**

### Setting up Git with Pycharm
If you have Pycharm installed, you can set up a new project and import a repository instead of setting up Git on its own and managing it from the command line.

#### Load project from GitHub
To import from GitHub, you'll first need to open Pycharm. I recommend making a separate virtual environment or conda environment in your IDE with a test project that can be deleted later.

1. Go to Git > Get from version control > Paste this repository URL and authenticate to your GitHub account.

2. In the bottom bar of your Pycharm, go to Git. All branches should be visible on the "Remote" tab.

### Setting up Git without an IDE:
Download and setup Git [here](https://git-scm.com/downloads).

GitHub is a cloud based repository viewer that allows a repository to be accessed via webapp. GitHub will act as a central location for all our individual tasks and develepments to be accessed from any computer connected to the internet. Changes should be comitted to Git first and then pushed to GitHub so anybody can access pull the changes to the repository.

#### Cloning
To make the initial link of a GitHub repository onto your git, you must clone it. Here are the steps to doing so

1. Open git bash or linux terminal in the working directory of where you wish to store the repository files on your computer. This is can be done by right-clicking inside the folder you save the files and selecting "Git Bash Here"

2. Use the clone command to clone the GitHub repository onto your git. It will automatically create a folder with the name of the repository with all of its contents
```
git clone https://github.com/Mechatronics-SDSU/software-workflow-intro.git
```

#### Branching
Every repository, in our case **software-workflow-intro**, has a **master** or **main** branch where the most up-to-date ready to ship version is held. This is to ensure there is always a deployable version at any point in the development and maintenance cycle. When new features or additions are being developed, typically a new branch is created with the name of that feature. This allows for a new location that new code, PCB designs, and updates can be saved without affecting the **master** branch. In our case, there currently exists a branch for each seperate piece to the project. Once one of the features/branches has been thoroughly tested and is stable, that branch is merged into the **master** branch. What this will do is copy all files from the initial development branch and merge them into the **master** branch, so it becomes the most up-to-date version with these new features.

Here is an example of how to create a new branch off of main. Please use the following naming format for the branch **[feature-name]_[optional-descriptor]**

#### Creating a New Branch Example

Let's suppose you had to implement a new feature for sending our camera data over ethernet to a host computer. You would branch off of whatever code you need to work on to work on such a feature, so a **beta** branch that already handles some camera transcoding. Because this is a new feature, you wouldn't need to include an optional descriptor. Because you're the author of this new feature, you get to name it. Because you're sending video frame data over an ethernet connection, a good name for this feature would be **video-network**.
Create a new branch off of **beta** called **video-network**

```
git checkout -b video-network beta
```

Let's suppose you now had to make a branch off of the beta branch to fix a video networking issue. The feature you are working on already exists from earlier and is called the **video-network** (using - instead of _). The optional descriptor in this case would be "patch1", because the branch will be for the first patch on this feature.
Create a new branch off of **beta** called **video-network_patch1**

```
git checkout -b video-network_patch1 beta
```

This can be done locally but also done on GitHub and pulled, if you don't like working with a command line.

#### Git workflow with Pycharm

The recommended IDE we use on the software team is Pycharm. It is not required, but recommended, and these instructions are written with Pycharm in mind. You will have to either use the no IDE workflow below or look into how you use similar Git features on your own IDE. If you haven't set up Pycharm or a Python environment on your computer, please refer to our [Python setup guide](python_setup_guide.md).

1. Open Pycharm and load your project.


2. Go to Git on the bottom of Pycharm. If you don't have new changes, checkout from the branch you're working on by right-clicking on the remote branch and pull any new changes. If you need to make a new branch, right click and select "New Branch from Selected..." to make a new branch.


3. Start developing normally until you're done for the day or done with the code on this branch.


4. Add the specific files you worked on if they aren't added. If a file is green in pycharm, it means it was added. If it is white, it already existed and has no changes. If it is blue it already existed and was modified. If it is red, it is not added. To add any red files that should be on the Git, right click in the project viewer, go to "Git", then "+ Add" to add the file to your branch. **Do NOT add compiled binaries or entire virtual environments, ONLY source code**.


5. Go to the "Commit" tab on the left of Pycharm and verify the default changelist that all files you need are on there and all files you don't want to push are not. Add a brief but meaningful commit message explaining what was changed and select "Commit".


6. Push these commits to the remote repository on the "Git" tab at the bottom of pycharm by clicking on your local branch you just committed changes to, then select "Push" to push local changes to the remote repository.


#### Git Workflow (no IDE)

Here is a step by step explanation of how a typical worksession goes:

1. Open git bash or linux terminal in the working directory of where you store the repository files on your computer. This is can be done by right-clicking inside the folder you save the files and selecting "Git Bash Here"


2. Pull any and all changes from the GitHub repository **master** to be saved into your local git. Note you must enter the exact branches you wish to update your local version of to the GitHub version. See step 3 on how to change current branch. 
```
git pull
```

3. Enter the exact branch you wish to do development in. Important to do this step as failure to do so may result in conflicts
```
git checkout [Name_of_Branch]
```

4. Start developing as you normally do until you are all finished


5. Add the specific files that were worked on
```
git add file.txt

or

git add -A
```

6. Commit the changes to the added files to the local git with a message of what was changed. It is important to add a message as the commit will open up VIM expecting you to write a message in. **To avoid this issue, be sure to write the message in the initial commit command**.
```
git commit -m "Programmed the Arduino to blink an LED every 5 seconds"
```


7. Push these commits in your local git to the GitHub so everyone can pull these changes to their local computers.
```
git push origin [Name_of_Branch]
```

8. A pop window will appear prompting for you GitHub login information. Enter you username into the first window and click submit, then enter you password into the second window and click submit.


### After committing changes

Don't merge branches on GitHub. Go to "pull request" on GitHub to put in a pull request that can be approved by approved project leads.
