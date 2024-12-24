#ifndef TASK_MANAGER_H_
#define TASK_MANAGER_H_
#include <iostream>
#include <vector>

class TaskManager
{
	public:
    TaskManager();

	  struct Task
    {
      std::string task_;
      int priority;	
    };

		bool addTask(const Task& new_task);
		
		bool remove_Task(Task target, Task& result);

		bool set_task_priority(Task target, int new_priority);
		
		void sort_by_priority();
	
private:

		std::vector<Task> task_list;
};


#endif

