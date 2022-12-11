// import {
//   Controller,Get,Param,ParseIntPipe,Query,Put,Delete,} from "@nestjs/common";
// import { UserService } from "./user.service";
// import { User } from "./user.schema";

// @Controller("users")
// export class UserController {
//   constructor(private readonly userService: UserService) {}

//   @Get()
//   findAll(): Promise<User[]> {
//     return this.userService.findAll();
//   }

//   @Get("young")
//   findYoungUsers(): Promise<User[]> {
//     return this.userService.findYoungUsers();
//   }

//   @Get("sorted")
//   findSortedUsers(): Promise<User[]> {
//     return this.userService.findSortedUsers();
//   }

//   @Get("paginated")
//   findPaginatedUsers(
//     @Query("pageNumber", ParseIntPipe) pageNumber: number,
//     @Query("pageSize", ParseIntPipe) pageSize: number
//   ): Promise<User[]> {
//     return this.userService.findPaginatedUsers(pageNumber, pageSize);
//   }

//   @Get("count")
//   countUsers(): Promise<number> {
//     return this.userService.countUsers();
//   }

//   @Put(":username/update")
//   updateUser(
//     @Param("username") username: string,
//     @Query("age", ParseIntPipe) age: number
//   ): Promise<User | null> {
//     return this.userService.updateUser(username, age);
//   }

//   @Delete(":username/delete")
//   deleteUser(@Param("username") username: string): Promise<User | null> {
//     return this.userService.deleteUser(username);
//   }
// }
// import { Injectable } from "@nestjs/common";
// import { InjectModel } from "@nestjs/mongoose";
// import { Model } from "mongoose";
// import { User } from "./user.schema";

// @Injectable()
// export class UserService {
//   constructor(@InjectModel(User.name) private userModel: Model<User>) {}

//   async findAll(): Promise<User[]> {
//     return await this.userModel.find().exec();
//   }

//   async findYoungUsers(): Promise<User[]> {
//     return await this.userModel.find({ age: { $lt: 30 } }).exec();
//   }

//   async findSortedUsers(): Promise<User[]> {
//     return await this.userModel.find().sort({ age: 1 }).exec();
//   }

//   async findPaginatedUsers(
//     pageNumber: number,
//     pageSize: number
//   ): Promise<User[]> {
//     return await this.userModel
//       .find()
//       .skip((pageNumber - 1) * pageSize)
//       .limit(pageSize)
//       .exec();
//   }

//   async countUsers(): Promise<number> {
//     return await this.userModel.countDocuments().exec();
//   }

//   async updateUser(username: string, age: number): Promise<User | null> {
//     return await this.userModel
//       .findOneAndUpdate({ username }, { age }, { new: true })
//       .exec();
//   }

//   async deleteUser(username: string): Promise<User | null> {
//     return await this.userModel.findOneAndDelete({ username }).exec();
//   }
// }

import { Injectable } from '@nestjs/common';
import { InjectModel } from '@nestjs/mongoose';
import { Model } from 'mongoose';
import { User } from './user.schema';

@Injectable()
export class UserService {
  constructor(@InjectModel(User.name) private userModel: Model<User>) {}

  async findAll(): Promise<User[]> {
    return await this.userModel.find().exec();
  }

  async findYoungUsers(): Promise<User[]> {
    return await this.userModel.find({ age: { $lt: 30 } }).exec();
  }

  async findSortedUsers(): Promise<User[]> {
    return await this.userModel.find().sort({ age: 1 }).exec();
  }

  async findPaginatedUsers(pageNumber: number, pageSize: number): Promise<User[]> {
    return await this.userModel.find().skip((pageNumber - 1) * pageSize).limit(pageSize).exec();
  }

  async countUsers(): Promise<number> {
    return await this.userModel.countDocuments().exec();
  }

  async updateUser(username: string, age: number): Promise<User | null> {
    return await this.userModel.findOneAndUpdate({ username }, { age }, { new: true }).exec();
  }

  async deleteUser(username: string): Promise<User | null> {
    return await this.userModel.findOneAndDelete({ username }).exec();
  }
}

