#pragma once

class EnemySpawner {
  public:
    EnemySpawner(int maxCount) : m_count(maxCount), m_spawned(0) {}
    int spawn();
    int spawnedCount() const{ return m_spawned; }
  private:
    int m_count;
    int m_spawned;
};

