# Competitive Programming Template Manager Extension

## Overview

The Competitive Programming Template Manager Extension is a Chrome extension designed to provide instant access to commonly used competitive programming templates such as DSU, Segment Tree, Binary Lifting, KMP, and many others. Instead of navigating through GitHub repositories and folders during contests or practice sessions, users can access their templates directly from a browser popup or side panel.

The extension will allow users to organize templates, search for algorithms quickly, preview code snippets, and copy them to the clipboard without leaving coding platforms such as LeetCode, CodeChef, Codeforces, AtCoder, and HackerRank. The primary objective is to reduce context switching and improve productivity during problem-solving sessions.

---

## Problem Statement

Competitive programmers frequently rely on a collection of standard algorithm implementations that are reused across multiple problems. While storing these templates in a GitHub repository is convenient for maintenance, accessing them during contests often becomes a time-consuming process.

A typical workflow involves:

* Opening GitHub
* Finding the template repository
* Navigating through folders
* Opening the required file
* Copying the code
* Returning to the coding platform

Although each step is simple, the cumulative overhead can be significant during contests where every minute matters. There is a need for a faster, searchable, and always-accessible template library that is integrated directly into the browser.

---

## Target Users

1. Primary Audience 

Competitive programmers, LeetCode users, CodeChef contestants, Codeforces contestants, AtCoder participants

2. Secondary Audience

Students preparing for coding interviews, DSA learners, Programming club members, ICPC participants

---

## MVP Features

#### Template Categories

Templates will be organized into logical categories to make navigation easier. This structure will help users quickly locate templates even without using search.

#### Search Templates

The extension will provide instant search functionality that allows users to find templates using Algorithm names, Tags, Keywords.

For example (Future Scope need AI or cosine similarity like something):

* Searching for "dsu" should return Disjoint Set Union.
* Searching for "shortest path" should return Dijkstra and Bellman-Ford.
* Searching for "pattern matching" should return KMP and Z Algorithm.

The search experience should be fast enough to feel instantaneous.

#### Template List

Users will be able to browse all available templates through a structured list or sidebar view. Each template entry should display essential information such as: Template name, Category, Associated tags

This view will serve as the primary navigation mechanism within the extension.

#### Code Preview

Selecting a template should open a detailed preview page containing:

* Template name
* Complete code snippet 
* Short description (Current - Manual, Future scope - AI)
* Time complexity (Current - Manual, Future scope - AI)
* Space complexity (Current - Manual, Future scope - AI)

This allows users to verify that they have selected the correct implementation before copying it.

#### One-Click Copy

Every template should include a dedicated copy button that instantly copies the entire code snippet to the clipboard. The goal is to reduce the process of obtaining a template to a single click.

#### Local Storage

Templates will initially be stored using browser storage to ensure fast and reliable access. This approach provides several advantages - Offline availability - Faster retrieval - No backend dependency.

#### GitHub Synchronization

Users should eventually be able to synchronize templates directly from a GitHub repository. 

#### Side Panel Mode

A side panel mode enabling users to keep the template library open while solving problems. This creates a smoother workflow by eliminating the need to repeatedly open and close the extension.

---
## JSON Template Example

```
{ "id": "segment-tree", 
  "title": "Segment Tree", 
  "category": "Data Structures", 
  "tags": [ "range query", "tree" ], 
  "language": "cpp", 
  "description": "Range query data structure", 
  "timeComplexity": "O(log n)", 
  "spaceComplexity": "O(n)", 
  "codeFile": "segment-tree.cpp" 
}
```
`codeFile` can be file of type c, cpp, java, python.

---

## Future Features

#### Template Management (Priority)

Users should be able to manage their template library directly within the extension by:

* Adding templates
* Editing templates
* Deleting templates

Our Product can be used to commit and push into github repository. 

#### Favorites

Users should be able to mark frequently used templates as favorites for quicker access during contests.

#### Recent Templates

The extension can maintain a history of recently viewed or copied templates, allowing users to revisit commonly used algorithms without searching again.

#### Keyboard Shortcuts

Keyboard shortcuts can further improve accessibility. For example:

* `Ctrl + Shift + T` → Open Template Search

Additional shortcuts may be introduced as the extension evolves.

#### Snippet Injection

A future enhancement could allow templates to be inserted directly into supported online editors without requiring manual copy-paste.

Potential integrations include:

* LeetCode
* Codeforces
* CodeChef

#### Cloud Sync

Beyond GitHub synchronization, users may be able to store and synchronize templates using cloud providers such as:

* GitHub
* Firebase
* Google Drive

#### AI-Powered Search

Natural language search could make template discovery even easier. Examples include:

* "union find" → DSU
* "range query" → Segment Tree
* "find pattern in string" → KMP

This feature would allow users to search based on concepts rather than exact algorithm names.

### Contest Mode

A dedicated contest mode could provide a streamlined interface focused on speed and efficiency. The interface may prioritize:

* Favorite templates
* Recently used templates
* Most frequently used templates

This mode would be optimized specifically for competitive programming contests.

---

## Constraints

#### Time Constraints

This project will be developed as a personal side project and should be built incrementally. Features should be prioritized carefully to avoid unnecessary complexity during the early stages.

### Browser Support

The initial release will target Chrome (Manifest V3).  Future versions may support - Microsoft Edge, Brave, Firefox

### Storage Constraints

The MVP should function entirely offline and should not require a backend service. All essential functionality must remain available without an internet connection.

### Performance Constraints

The extension should remain lightweight and responsive. Performance goals include:

* Opening within one second
* Displaying search results within 100 milliseconds
* Allowing template copying with a single click

### Security Constraints

Security and privacy should remain simple and transparent. The MVP should:

* Request minimal browser permissions
* Avoid user authentication
* Avoid unnecessary external API calls or network requests

---

## Tech Preferences

#### Frontend

The preferred frontend stack consists of:

* React or Next.js
* TypeScript

#### Extension Framework

The recommended setup is:

* Vite
* Chrome Extension Manifest V3

#### Storage

Templates will initially be stored using `chrome.storage.local`.

#### Code Editor

For the MVP, a simple code viewer or textarea will be sufficient.
Future versions may integrate Monaco Editor.

---

### Validation

The project will be considered successful if it completely replaces the current GitHub-based workflow during contests and practice sessions. The ultimate goal is to make accessing templates so fast and convenient that opening GitHub is no longer necessary.
