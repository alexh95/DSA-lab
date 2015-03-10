/* Copyright 2015 Erhard Muresan.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "sllist.h"

/* creates single linked node */
Node *createNode(int data)
{
  Node *node = (Node *)malloc(sizeof(Node));
  if (node == NULL)
    perror("Couldn't allocate memory for the new node!");
  node->data = data;
  node->next = NULL;
  return node;
}

/* creates empty single linked list */
List *createList()
{
  List *list = (List *)malloc(sizeof(List));
  if (list == NULL)
    perror("Couldn't allocate memory for the new list!");
  list->head = NULL;
  list->tail = NULL;
  return list;
}
